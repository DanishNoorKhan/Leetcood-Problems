/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int size = mountainArr.length();
        int str = 0;
        int end = size-1;
        int peak = 0;

        //finding peak.
        while(str < end){

        int mid = str + (end-str)/2;
        if(mountainArr.get(mid) < mountainArr.get(mid + 1)){
            str = mid + 1;
        }
        else{
            end = mid;
        }
    }
        peak = str;
        str = 0;
        end = peak;

        //left bineary search
        while(str <= end){
            int mid = str + (end-str)/2;

            if(mountainArr.get(mid) == target){
                return mid;
            }
            else if(mountainArr.get(mid) > target){
                end = mid -1 ;
            }
            else {
                str= mid + 1;
            }
        }
        
        str =  peak + 1;
        end = size -1 ;

        //Right bineary search 
        
        while(str <= end){
            int mid = str + (end-str)/2;

            if(mountainArr.get(mid) == target){
                return mid;
            }
            else if(mountainArr.get(mid) > target){
                str = mid + 1 ;
            }
            else {
                end= mid -1 ;
            }
        }
        //target not found
        return -1;
    }
};