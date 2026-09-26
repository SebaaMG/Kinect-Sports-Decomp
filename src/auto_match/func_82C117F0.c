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
extern int fn_82C10B28();
extern int fn_82C10F40();


undefined8
fn_82C117F0(undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 *puStack_70;
  int aiStack_6c [27];
  
  *param_2 = 0;
  puStack_70 = (undefined4 *)0x0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 0;
  aiStack_6c[0] = 0;
  uVar2 = fn_82C10F40(param_1[0x12],*(undefined1 *)(param_1 + 0x18),aiStack_6c);
  if (-1 < (int)uVar2) {
    if (*(int *)(aiStack_6c[0] + 0x18) != 0) {
      puStack_70 = *(undefined4 **)(aiStack_6c[0] + 0x18);
      if (puStack_70[0xd] != 0) {
        if (puStack_70[0xf] == 0) {
          *(undefined4 *)(aiStack_6c[0] + 0x1c) = 0;
        }
        else {
          *(undefined4 *)(puStack_70[0xf] + 0x38) = 0;
        }
        *(undefined4 *)(aiStack_6c[0] + 0x18) = puStack_70[0xf];
        uVar2 = (**(code **)(param_1[6] + 0x24))(param_1[6],*puStack_70);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        if (puStack_70[0xb] != 0) {
          fn_82C10B28(*param_1,0x20,puStack_70[0xb]);
          fn_82C10B28(*param_1,0x20,puStack_70 + 0xb);
        }
        fn_82C10B28(*param_1,0x20,&puStack_70);
        *(int *)(aiStack_6c[0] + 0x14) = *(int *)(aiStack_6c[0] + 0x14) + -1;
      }
      puStack_70 = *(undefined4 **)(aiStack_6c[0] + 0x18);
      if (puStack_70 != (undefined4 *)0x0) {
        uVar2 = (**(code **)(param_1[6] + 0x20))(param_1[6],*puStack_70,param_2,param_3);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        if ((*(int *)(aiStack_6c[0] + 0x28) != 0) &&
           (uVar3 = (**(code **)(param_1[5] + 8))
                              (param_1[5],*param_2,*param_3,puStack_70[0xb],
                               puStack_70[5] == puStack_70[6]), (int)uVar3 < 0)) {
          return uVar3;
        }
        puStack_70[6] = puStack_70[6] - *param_3;
        *param_5 = *(undefined8 *)(puStack_70 + 8);
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(puStack_70 + 8);
        *param_7 = puStack_70[4];
        *param_8 = puStack_70[1];
        if ((puStack_70[0xc] == 0) && (*(int *)(aiStack_6c[0] + 0x20) == 0)) {
          puStack_70[0xc] = 1;
          *param_6 = 1;
          *(int *)(aiStack_6c[0] + 0x20) = *param_3;
        }
        else {
          *(int *)(aiStack_6c[0] + 0x20) = *(int *)(aiStack_6c[0] + 0x20) + *param_3;
        }
        if (*(int *)(aiStack_6c[0] + 0x20) == puStack_70[4]) {
          *param_4 = 1;
          *(undefined4 *)(aiStack_6c[0] + 0x20) = 0;
          bVar1 = *(byte *)(param_1 + 0x18);
          iVar4 = (bVar1 >> 5) + 0x14;
          param_1[iVar4] =
               1 << ((uint)bVar1 + ((int)(uint)bVar1 >> 5) * -0x20 & 0x3f) | param_1[iVar4];
        }
        if ((int)uVar2 != 0x500001) {
          return uVar2;
        }
        puStack_70[0xd] = 1;
        return uVar2;
      }
    }
    uVar2 = 0xffffffff8050000b;
  }
  return uVar2;
}

