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
extern int fn_82FF3E78();
extern int fn_83018DD8();
extern unsigned int lbl_832642FC;


undefined8 fn_82FF0638(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  
  uVar3 = 1;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x68) + 0xfc))();
  if (piVar1 != (int *)0x0) {
    uVar2 = 0;
    piVar4 = (int *)(param_1 + 0xec);
    do {
      if (*piVar4 != 0) {
        piVar5 = (int *)*piVar1;
        if (piVar5 != (int *)piVar1[1]) {
          do {
            if ((*piVar5 == piVar4[-1]) && (piVar5[1] == uVar2)) {
              uVar3 = fn_83018DD8(lbl_832642FC,*piVar4,piVar5[2],piVar5[3],piVar5[4],piVar5[7]
                                        ,piVar5[5],piVar5[6]);
            }
            piVar5 = piVar5 + 8;
          } while (piVar5 != (int *)piVar1[1]);
        }
      }
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 4;
    } while (uVar2 < 4);
  }
  piVar1 = (int *)fn_82FF3E78(*(undefined4 *)(param_1 + 0x68));
  if (piVar1 != (int *)0x0) {
    piVar4 = (int *)*piVar1;
    if (piVar4 != (int *)piVar1[1]) {
      do {
        if ((*piVar4 == *(int *)(param_1 + 0x128)) && (*(int *)(param_1 + 300) != 0)) {
          uVar3 = fn_83018DD8(lbl_832642FC,*(int *)(param_1 + 300),piVar4[2],piVar4[3],
                                    piVar4[4],piVar4[7],piVar4[5],piVar4[6]);
        }
        piVar4 = piVar4 + 8;
      } while (piVar4 != (int *)piVar1[1]);
    }
  }
  return uVar3;
}

