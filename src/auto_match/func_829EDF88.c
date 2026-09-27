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
extern int fn_829EC6F8();
extern int fn_829EDF18();
extern unsigned int lbl_82002D08;


undefined8
fn_829EDF88(int param_1,undefined8 param_2,uint param_3,undefined4 *param_4,float *param_5,
             uint param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  longlong alStack_40;
  
  if (param_4 != (undefined4 *)0x0) {
    uVar4 = 0;
    if ((*(int *)(param_1 + 8) != 0) && (*(short *)(param_1 + 0x14) != 0)) {
      uVar4 = (uint)**(ushort **)(param_1 + 0x2c);
    }
    if (param_3 == uVar4) {
      iVar1 = fn_829EDF18(param_1,param_2,&alStack_40);
      *param_4 = ((uint)((ulonglong)(alStack_40) >> 32));
      if ((iVar1 != 0) && (param_5 != (float *)0x0)) {
        uVar4 = 0;
        iVar1 = iVar1 - (int)param_5;
        dVar5 = (double)lbl_82002D08;
        while( true ) {
          uVar2 = fn_829EC6F8(param_1);
          uVar3 = param_6;
          if (uVar2 <= param_6) {
            uVar3 = fn_829EC6F8(param_1);
          }
          if (uVar3 <= uVar4) break;
          if (uVar4 < param_6) {
            alStack_40 = (longlong)*(int *)(iVar1 + (int)param_5);
            *param_5 = (float)((double)alStack_40 * dVar5);
          }
          uVar4 = uVar4 + 1;
          param_5 = param_5 + 1;
        }
      }
      return 0;
    }
  }
  return 0xffffffff80070057;
}

