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
extern int fn_825089A0();
extern int fn_8287DB98();
extern int fn_8287DDB0();
extern int fn_8287E990();
extern int fn_8287FB30();
extern int fn_828821A0();
extern int fn_82882218();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_8287FC28(int param_1,undefined8 param_2)

{
  char cVar4;
  int iVar2;
  int *piVar3;
  undefined8 uVar1;
  undefined4 uStack0000001c;
  
  uStack0000001c = (undefined4)param_2;
  cVar4 = fn_828821A0(param_2);
  if ((cVar4 == '\0') && (cVar4 = fn_82882218(param_2), cVar4 == '\0')) {
    iVar2 = fn_8287FB30(param_1 + 0xf0,&stack0x0000001c);
    fn_8287DB98(param_1,iVar2,0,param_2);
    piVar3 = (int *)fn_825089A0();
    uVar1 = (**(code **)(*piVar3 + 0xc))();
    fn_8287DDB0(param_1,iVar2,uVar1);
    *(float *)(param_1 + 0x94) = *(float *)(iVar2 + 0x94) + *(float *)(param_1 + 0x94);
    fn_8287E990(param_1);
  }
  return;
}

