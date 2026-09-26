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
extern int fn_82809CB8();
extern int fn_82809E58();
extern int fn_8284D780();
extern int fn_828509F0();
extern int fn_82850DB8();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_8284F6F8(int param_1,int *param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong lStack_38;
  
  piVar1 = (int *)*param_2;
  if (*piVar1 != -1) {
    fn_8284D780(*(undefined4 *)(param_1 + 4),&uStack_40);
    fn_828509F0(uStack_40,piVar1[0xe],&uStack_3c);
    dVar2 = (double)fn_82809CB8((double)(float)param_2[0x32]);
    lStack_38 = (longlong)(int)dVar2;
    dVar3 = (double)fn_82809CB8((double)(float)param_2[0x33]);
    lStack_38 = (longlong)(int)dVar3;
    dVar4 = (double)fn_82809E58((double)(float)param_2[0x34]);
    lStack_38 = (longlong)(int)dVar4;
    dVar5 = (double)fn_82809E58((double)(float)param_2[0x35]);
    lStack_38 = (longlong)(int)dVar5;
    fn_82850DB8(uStack_3c,(int)dVar2,(int)dVar3,(int)dVar4,(int)dVar5,*(undefined4 *)(param_1 + 8))
    ;
  }
  return;
}

