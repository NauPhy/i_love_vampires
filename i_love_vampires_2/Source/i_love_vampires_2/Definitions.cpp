#include "Definitions.h"

void LOGERROR(const char* inputString) {
	UE_LOG(LogTemp, Warning, TEXT("% s"), ANSI_TO_TCHAR(inputString));
	checkNoEntry();
}
void LOGWARNING(const char* inputString) {
	UE_LOG(LogTemp, Warning, TEXT("% s"), ANSI_TO_TCHAR(inputString));
}