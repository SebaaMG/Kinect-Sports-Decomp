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
extern int fn_82F63BA0();
extern int fn_82F665B0();
extern int fn_82F68240();


undefined8
fn_82F66778(undefined1 *param_1,uint param_2,uint param_3,ulonglong param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  int *piVar3;
  undefined4 uVar4;
  
  if ((param_4 & 0xffffffff) != 0) {
    if (param_3 == 0) {
      if (param_1 == (undefined1 *)0x0) {
        if (param_2 == 0) {
          return 0;
        }
      }
      else {
LAB_82f667e8:
        if (param_2 != 0) {
          if (param_3 < param_2) {
            puVar2 = (undefined4 *)fn_82F68240();
            uVar4 = *puVar2;
            uVar1 = fn_82F665B0(0xffffffff82f79578,param_1,param_3 + 1,param_4,param_5,param_6
                                     );
            if ((int)uVar1 == -2) {
              piVar3 = (int *)fn_82F68240();
              if (*piVar3 != 0x22) {
                return 0xffffffffffffffff;
              }
              puVar2 = (undefined4 *)fn_82F68240();
              *puVar2 = uVar4;
              return 0xffffffffffffffff;
            }
LAB_82f668a4:
            if (-1 < (int)uVar1) {
              return uVar1;
            }
          }
          else {
            puVar2 = (undefined4 *)fn_82F68240();
            uVar4 = *puVar2;
            uVar1 = fn_82F665B0(0xffffffff82f79578,param_1,param_2,param_4,param_5,param_6);
            param_1[param_2 - 1] = 0;
            if ((int)uVar1 != -2) goto LAB_82f668a4;
            if (param_3 == 0xffffffff) {
              piVar3 = (int *)fn_82F68240();
              if (*piVar3 != 0x22) {
                return 0xffffffffffffffff;
              }
              puVar2 = (undefined4 *)fn_82F68240();
              *puVar2 = uVar4;
              return 0xffffffffffffffff;
            }
          }
          *param_1 = 0;
          if ((int)uVar1 != -2) {
            return 0xffffffffffffffff;
          }
          puVar2 = (undefined4 *)fn_82F68240();
          uVar4 = 0x22;
          goto LAB_82f667ac;
        }
      }
    }
    else if (param_1 != (undefined1 *)0x0) goto LAB_82f667e8;
  }
  puVar2 = (undefined4 *)fn_82F68240();
  uVar4 = 0x16;
LAB_82f667ac:
  *puVar2 = uVar4;
  fn_82F63BA0();
  return 0xffffffffffffffff;
}

