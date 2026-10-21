class Solution {
public:
    void remove(vector<int> &record){

        record.pop_back();
    }
    void doub(vector<int> &record){

        int next = record.back()*2;
        record.push_back(next);
    }
    void add(vector<int> &record){

        int size = record.size();
        int last = record[size-1];
        int second_last = record[size-2];
        record.push_back(last+second_last);
    }

    int calPoints(vector<string>& operations) {

        vector<int> record;
        int sum=0;

        for(int i=0; i<operations.size(); i++){
            if(operations[i]=="C"){
                remove(record);
            }
            else if(operations[i]=="D"){
                doub(record);
            }
            else if(operations[i]=="+"){
                add(record);
            }
            else{
                record.push_back(stoi(operations[i]));
            }
        }

        for(int i=0; i<record.size(); i++){
            sum += record[i];
        }

        return sum;

    }
};