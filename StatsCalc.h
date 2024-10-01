#ifndef STATSCALC_H
#define STATSCALC_H


class StatsCalc
{
public:
    StatsCalc(){};
    ~StatsCalc(){};
    
    float mean(int x1, int x2, int x3, int x4);
    
    float standarddeviation(int x1, int x2, int x3, int x4);
    
    float average(int value1, int value2, int value3, int value4);
    
    float rmsd(int value1, int value2, int value3, int value4);
private:
    float calcmean ;
    };

#endif // !STATSCALC_H
