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
extern int fn_8288B760();
extern int fn_828A94B0();
extern int fn_828AA188();
extern int fn_828B1340();
extern int fn_828ED1A0();


void fn_828AA2C8(int param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 auStack_30 [3];
  
  fn_8288B760(param_2);
  (**(code **)(*param_2 + 0x44))(param_2);
  auStack_30[0] = (**(code **)(*param_2 + 0x48))(param_2);
  cVar2 = fn_828B1340(param_1);
  if (cVar2 == '\0') {
    cVar2 = fn_828ED1A0(*(undefined4 *)(param_1 + 0x8c));
    bVar1 = false;
    if (cVar2 == '\0') goto LAB_828aa374;
  }
  bVar1 = true;
LAB_828aa374:
  if (bVar1) {
    fn_828AA188(param_1 + 0x188);
  }
  else {
    fn_828A94B0(param_1,auStack_30);
  }
  return;
}

