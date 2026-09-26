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
extern unsigned int *auStack_38;
extern int fn_82C1EC50();
extern int fn_82C1EE20();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined8 fn_82C24BE8(int param_1,undefined8 param_2,ulonglong *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 auStack_38 [14];
  
  auStack_38[0] = 0;
  uStack_3c = 0;
  if (param_1 == 0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x1c);
    uStack_40 = 0x18;
    uVar2 = (**(code **)(*piVar1 + 0xc))(*piVar1,0x18);
    if ((((-1 < (int)uVar2) &&
         (uVar2 = fn_82C1EE20(param_1,param_2,auStack_38,&uStack_3c,&uStack_40), -1 < (int)uVar2))
        && (uVar2 = fn_82C1EC50(param_1,param_3,auStack_38,&uStack_3c,&uStack_40), -1 < (int)uVar2
           )) && ((*param_3 < 0x18 ||
                  ((ulonglong)*(uint *)(piVar1[1] + 4) <
                   (*(longlong *)(piVar1 + 2) + *param_3) - 0x18)))) {
      uVar2 = 0xffffffff8050000c;
    }
  }
  return uVar2;
}

