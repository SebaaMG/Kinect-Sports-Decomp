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
extern int fn_82522ED8();
extern int fn_82529CC0();
extern int fn_82594B58();
extern int fn_8288B760();
extern int iRam8326af38;
extern unsigned int *lbl_83297008;


void fn_825298E8(uint param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  undefined4 *puStack_30;
  undefined4 *apuStack_2c [11];
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      cVar2 = fn_8288B760();
      if (cVar2 != '\0') {
        puVar3 = *(undefined4 **)(param_1 + 0x20);
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      piVar1 = *(int **)(param_1 + 0x20);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x5c))(piVar1,1);
        piVar1[0x20] = 0;
        (**(code **)(*piVar1 + 0x5c))(piVar1,0);
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    puStack_30 = lbl_83297008;
    puVar3 = (undefined4 *)lbl_83297008[1];
    while (*(char *)((int)puVar3 + 0x15) == '\0') {
      if ((uint)puVar3[3] < param_1) {
        puVar3 = (undefined4 *)puVar3[2];
      }
      else {
        puStack_30 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
      }
    }
    if ((puStack_30 == lbl_83297008) || (param_1 < (uint)puStack_30[3])) {
      apuStack_2c[0] = lbl_83297008;
      ppuVar4 = apuStack_2c;
    }
    else {
      ppuVar4 = &puStack_30;
    }
    if (*ppuVar4 != lbl_83297008) {
      fn_82594B58(param_1);
    }
  }
  fn_82529CC0(param_1,*(undefined4 *)(param_1 + 4),0);
  fn_82522ED8(param_1);
  iRam8326af38 = iRam8326af38 + -1;
  return;
}

