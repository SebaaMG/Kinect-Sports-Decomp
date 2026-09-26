typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned int *auStack_30;
extern int fn_82CE6150();
extern unsigned int lbl_82006848;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_820BC52C;
extern unsigned int lbl_821AAD20;


char * fn_82D979F0(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  double dVar3;
  undefined1 auStack_30 [24];
  
  *param_1 = '\x01';
  dVar3 = (double)lbl_82006848;
  pcVar1 = (char *)fn_82CE6150(dVar3,auStack_30,param_2 + 0x20);
  cVar2 = '\x01' - (*pcVar1 == '\0');
  *param_1 = cVar2;
  if (cVar2 != '\0') {
    pcVar1 = (char *)fn_82CE6150(dVar3,auStack_30,param_2 + 0x60);
    cVar2 = '\x01';
    if (*pcVar1 != '\0') goto LAB_82d97a70;
  }
  cVar2 = '\0';
LAB_82d97a70:
  *param_1 = cVar2;
  if ((cVar2 == '\0') || (cVar2 = '\x01', *(float *)(param_2 + 0x118) != lbl_820BC52C)) {
    cVar2 = '\0';
  }
  *param_1 = cVar2;
  if ((cVar2 == '\0') || (cVar2 = '\x01', *(float *)(param_2 + 0x11c) < lbl_821AAD20)) {
    cVar2 = '\0';
  }
  *param_1 = cVar2;
  if ((cVar2 == '\0') || (cVar2 = '\x01', lbl_8201DD74 <= *(float *)(param_2 + 0x11c))) {
    cVar2 = '\0';
  }
  *param_1 = cVar2;
  if ((cVar2 == '\0') || (cVar2 = '\x01', *(float *)(param_2 + 0x130) < *(float *)(param_2 + 300)))
  {
    cVar2 = '\0';
  }
  *param_1 = cVar2;
  if ((cVar2 == '\0') || (cVar2 = '\x01', *(float *)(param_2 + 0x108) < *(float *)(param_2 + 0x104))
     ) {
    cVar2 = '\0';
  }
  *param_1 = cVar2;
  return param_1;
}

