#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class SPowerData
{
    public: 
    float m_Amp;
    float m_Res;
    float m_Power;

};

class CPowerInfo{

    private:
    SPowerData *m_power_array;
    fstream m_File;
    int numElem;

    public:
    
    int getNumElements (const string pFile){

        m_File.open(pFile);

        if (!m_File){
            cout << "Error: Could not open file " << pFile << "." << endl;
            return 0;
        }

        int count = 0;
        float a,b;
        while (m_File >> a >> b){
            count ++;

        }
        
        m_File.close();
        return count;

    };

    void LoadData(string pFile, int numElements){
        numElem = numElements;
        m_power_array = new SPowerData[numElem];

        m_File.open(pFile);

        if (!m_File){
            cout << "Error: Could not open file " << pFile << "." << endl;
            return;
        }

        cout << "\n Total elements:" << numElements << endl;
        

        for (int j = 0; j < numElements; j++){
            m_File >> m_power_array[j].m_Amp >> m_power_array[j].m_Res;
            cout << m_power_array[j].m_Amp << "\t" << m_power_array[j].m_Res << endl;
            m_power_array[j].m_Power = m_power_array[j].m_Amp*m_power_array[j].m_Amp*m_power_array[j].m_Res;
    
                    
        };

        m_File.close();
    }

    void FindMinMaxPower (float &outMinPower, float &outMaxPower){

        outMinPower = 1000000.0;
        outMaxPower = 0.0;

        for (int m = 0; m < numElem; m++){
            if (m_power_array[m].m_Power < outMinPower){
                outMinPower = m_power_array[m].m_Power;
            }

            else{
                outMinPower = outMinPower;
            }
        };

        for (int n = 0; n < numElem; n++){
            if (m_power_array[n].m_Power > outMaxPower){
                outMaxPower = m_power_array[n].m_Power;
            }

            else{
                outMaxPower = outMaxPower;
            }
        };
    };
};

int main() {
    CPowerInfo pw;
    int numElements = pw.getNumElements("AmpRes.txt");
    pw.LoadData("AmpRes.txt", numElements);
    float minpower, maxpower;
    pw.FindMinMaxPower(minpower, maxpower);
    cout << "\n The minimum power = " << minpower << endl;
    cout << "\n The maximum power = " << maxpower << endl;
    cout << endl;
    return 1;

}