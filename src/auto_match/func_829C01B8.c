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
extern int fn_829B77B8();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_829C01B8(int param_1,undefined8 param_2,int *param_3,undefined8 param_4,int param_5,
                  int *param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar1 = *(int *)(param_1 + 0x1c8);
  if (*(int *)(iVar1 + 0x24) == 0) {
    uVar4 = 2;
    if (*(uint *)(iVar1 + 0x2c) < 2) {
      uVar4 = *(uint *)(iVar1 + 0x2c);
    }
    uVar2 = param_7 - *param_6;
    if (uVar2 < uVar4) {
      uVar4 = uVar2;
    }
    puVar3 = (undefined4 *)(*param_6 * 4 + param_5);
    uStack_30 = *puVar3;
    if (uVar4 < 2) {
      uStack_2c = *(undefined4 *)(iVar1 + 0x20);
      *(undefined4 *)(iVar1 + 0x24) = 1;
    }
    else {
      uStack_2c = puVar3[1];
    }
    (**(code **)(iVar1 + 0xc))(param_1,param_2,*param_3,&uStack_30);
  }
  else {
    fn_829B77B8(iVar1 + 0x20,0,*param_6 * 4 + param_5,0,1,*(undefined4 *)(iVar1 + 0x28));
    uVar4 = 1;
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
  *param_6 = *param_6 + uVar4;
  *(uint *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) - uVar4;
  if (*(int *)(iVar1 + 0x24) == 0) {
    *param_3 = *param_3 + 1;
  }
  return;
}

