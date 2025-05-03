#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <ctime>

class Sorting_Algorithms{
public:
    vector<double> data_original;
    vector<double> data_sorted;

    Sorting_Algorithms(vector<double> &v){
        data_original = v;
        //data_sorted = v;
    }

    void Selection_sort(){
        for(int i=0; i<data_original.size(); i++){
            int min_index = Find_minimum(i);
            //cout<<data_original[min_index]<<" "<<min_index<<endl;
            Swap_elements( data_original[i],  data_original[min_index]);
        }

    }

    void Insertion_sort(){
        
    }

    int Find_minimum(int start_index){
        int local_min_index = start_index;
        double local_min_val = data_original[start_index];

        for(int i=start_index; i<data_original.size()-1; i++){
            if (local_min_val > data_original[i+1]){
                local_min_index = i + 1;
                local_min_val = data_original[i+1];
            }
        }
        return local_min_index;
    }

    void Bubble_sort(){

        for(int i=0; i<data_original.size(); i++){
            for(int j=0; j<data_original.size()-1; j++){
                if (data_original[j] > data_original[j+1]){
                    Swap_elements( data_original[j],  data_original[j+1]);
                }
            }
        }

    } 

    void Print_elements(){
        for (auto i : data_original)
            cout << i << " ";

        cout<<'\n';
    }

    void Swap_elements(double &d1, double &d2){
        double tmp_element = d1;
        d1 = d2;
        d2 = tmp_element;

    }



};


int main(){

    srand(unsigned(std::time(nullptr)));

    vector<double> test_data(10);

    generate(test_data.begin(), test_data.end(), rand);

    Sorting_Algorithms sort_vector(test_data);

    cout<<"original data :: "<<endl;
    sort_vector.Print_elements();

    //sort_vector.Bubble_sort();
    sort_vector.Selection_sort();

    cout<<"sorted data :: "<<endl;
    sort_vector.Print_elements();
    //test_data[0] = 0.;

    return 0;
}