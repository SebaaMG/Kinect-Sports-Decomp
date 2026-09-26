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
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int fn_826824B0();
extern int fn_82696330();
extern int fn_826B3420();
extern int fn_8273E508();
extern int fn_82741698();
extern unsigned int iStack_3c;
extern unsigned int iStack_54;


void fn_826BB380(int param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  int *piVar2;
  undefined1 auStack_60 [8];
  code *pcStack_58;
  int iStack_54;
  int *piStack_50;
  code **ppcStack_4c;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  piVar2 = (int *)(param_1 + 0x38);
  param_1 = param_1 + 0x280;
  lVar1 = fn_8273E508(param_1,piVar2);
  if ((-(ulonglong)(lVar1 != 0) & lVar1 + 4U) == 0) {
    ppcStack_4c = &pcStack_58;
    pcStack_58 = fn_82741698;
    iStack_54 = 0;
    piStack_50 = piVar2;
    fn_826B3420(param_1,param_1,&piStack_50,*(undefined4 *)(*piVar2 + 0xc));
    if (iStack_54 != 0) {
      fn_826824B0();
    }
    iStack_3c = *piVar2;
    auStack_60[0] = 0;
    auStack_40[0] = 0xb;
    *(int *)(iStack_3c + 8) = *(int *)(iStack_3c + 8) + 1;
    (**(code **)(*(int *)(param_3 + 0x10) + 0x28))
              (param_3 + 0x10,param_2,piVar2,auStack_40,auStack_60);
    fn_82696330(auStack_40);
  }
  return;
}

