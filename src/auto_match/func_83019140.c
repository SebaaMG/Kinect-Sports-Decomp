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
extern int fn_82FA5190();
extern int fn_83018220();
extern int fn_83018BC0();
extern int fn_830195D8();
extern int fn_83019D98();
extern unsigned int lbl_831BC768;


undefined8
fn_83019140(int param_1,ulonglong param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5
             )

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar5;
  undefined8 uVar4;
  int iVar6;
  
  iVar6 = param_1 + 0x720;
  RtlEnterCriticalSection(iVar6);
  puVar5 = *(undefined4 **)(param_1 + 0x6e0);
  while( true ) {
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)fn_83019D98(param_1 + 0x6e0);
      if (puVar5 == (undefined4 *)0x0) {
        uVar4 = 2;
      }
      else {
        *puVar5 = (int)param_2;
        puVar5[1] = param_3;
        uVar4 = fn_830195D8(puVar5 + 2,param_4,param_5,0);
        uVar1 = lbl_831BC768;
        if ((int)uVar4 == 1) {
          puVar5[10] = 0;
          puVar5[8] = 0;
          puVar5[9] = 0xffffffff;
          puVar5[0xb] = 0;
          puVar5[0xc] = uVar1;
          puVar5[7] = 0;
          puVar5[5] = 0;
          puVar5[6] = 0;
        }
        else {
          fn_83018BC0(param_1,param_2);
        }
      }
      puVar5 = *(undefined4 **)(param_1 + 0x6c0);
      puVar3 = (undefined4 *)0x0;
      while (puVar2 = puVar5, puVar2 != (undefined4 *)0x0) {
        if ((ulonglong)(uint)puVar2[2] == (param_2 & 0xffffffff)) {
          puVar5 = (undefined4 *)*puVar2;
          uVar1 = puVar2[1];
          if (puVar2 == *(undefined4 **)(param_1 + 0x6c0)) {
            *(undefined4 **)(param_1 + 0x6c0) = puVar5;
          }
          else {
            *puVar3 = puVar5;
          }
          if (puVar2 == *(undefined4 **)(param_1 + 0x6c4)) {
            *(undefined4 **)(param_1 + 0x6c4) = puVar3;
          }
          *puVar2 = *(undefined4 *)(param_1 + 0x6c8);
          *(undefined4 **)(param_1 + 0x6c8) = puVar2;
          *(int *)(param_1 + 0x6d4) = *(int *)(param_1 + 0x6d4) + -1;
          fn_83018220(param_1,uVar1,param_2,0);
        }
        else {
          puVar5 = (undefined4 *)*puVar2;
          puVar3 = puVar2;
        }
      }
      RtlLeaveCriticalSection(iVar6);
      return uVar4;
    }
    if ((ulonglong)(uint)puVar5[1] == (param_2 & 0xffffffff)) break;
    puVar5 = (undefined4 *)*puVar5;
  }
  puVar5[2] = param_3;
  if (puVar5[3] != 0) {
    fn_82FA5190(lbl_831BC768);
    puVar5[3] = 0;
  }
  puVar5[4] = 0;
  puVar5[5] = 0;
  uVar4 = fn_830195D8(puVar5 + 3,param_4,param_5,0);
  RtlLeaveCriticalSection(iVar6);
  return uVar4;
}

