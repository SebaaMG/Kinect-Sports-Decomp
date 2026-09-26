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
extern char cRam83264328;
extern int fn_82FB03A0();
extern int fn_8300C838();
extern int fn_8300C870();
extern int fn_8302EE08();
extern int fn_8302EE80();


undefined8 fn_8302F0D0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  if (cRam83264328 == '\0') {
    uVar3 = fn_82FB03A0();
  }
  else {
    uVar3 = 1;
    if (param_1[0x2d] == 0) {
      piVar4 = (int *)fn_8300C838(param_1 + 0x2b,param_1[0x2f],param_1[0x2e]);
      if (piVar4 == (int *)0x0) {
        uVar3 = 0x34;
      }
      else {
        puVar6 = (undefined4 *)param_1[0x31];
        if (puVar6 != (undefined4 *)0x0) {
          do {
            piVar1 = (int *)piVar4[1];
            piVar5 = (int *)*piVar4;
            if (piVar5 != piVar1) {
              do {
                if (*piVar5 == puVar6[1]) break;
                piVar5 = piVar5 + 1;
              } while (piVar5 != piVar1);
              if (piVar5 != piVar1) {
                uVar3 = fn_8302EE08(param_1,puVar6 + 2);
              }
            }
            if ((int)uVar3 != 1) {
              for (puVar2 = (undefined4 *)param_1[0x31]; puVar2 != puVar6;
                  puVar2 = (undefined4 *)*puVar2) {
                piVar1 = (int *)piVar4[1];
                piVar5 = (int *)*piVar4;
                if (piVar5 != piVar1) {
                  do {
                    if (*piVar5 == puVar2[1]) break;
                    piVar5 = piVar5 + 1;
                  } while (piVar5 != piVar1);
                  if (piVar5 != piVar1) {
                    fn_8302EE80(param_1,puVar2 + 2);
                  }
                }
              }
            }
            puVar6 = (undefined4 *)*puVar6;
          } while (puVar6 != (undefined4 *)0x0);
          if ((int)uVar3 != 1) {
            return uVar3;
          }
        }
        param_1[0x2d] = param_1[0x2d] + 1;
        uVar3 = fn_8300C870(param_1 + 0x2b,param_1[0x2f],param_1[0x2e]);
        if ((int)uVar3 != 1) {
          (**(code **)(*param_1 + 0x8c))(param_1);
        }
      }
    }
  }
  return uVar3;
}

