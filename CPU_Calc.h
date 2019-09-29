#ifndef CPU_CALC_H
#define CPU_CALC_H
#include <Windows.h>
class CPU_Calc
{
	public:
		CPU_Calc();
		float GetCPULoad();
		
	private:
		 float CalculateCPULoad(unsigned long long idleTicks, unsigned long long totalTicks);
		 unsigned long long FileTimeToInt64(const FILETIME & ft);

};

#endif
