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
extern int fn_82359C18();
extern int fn_823FAB00();
extern int fn_823FACD8();
extern int fn_8265CA20();


undefined4 * fn_823FA890(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *apuStack_50 [20];
  
  puVar3 = *(undefined4 **)(param_2 + 4);
  lVar4 = 1;
  if (*(char *)((int)puVar3[1] + 0x49) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar1;
      if ((*(uint *)(param_3 + 0x10) < (uint)puVar3[4]) ||
         ((*(uint *)(param_3 + 0x10) <= (uint)puVar3[4] &&
          (*(int *)(param_3 + 0x14) < (int)puVar3[5])))) {
        lVar4 = 1;
      }
      else {
        lVar4 = 0;
      }
      if (lVar4 == 0) {
        puVar1 = (undefined4 *)puVar3[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar1 + 0x49) == '\0');
  }
  apuStack_50[0] = puVar3;
  if (lVar4 != 0) {
    if (puVar3 == (undefined4 *)**(undefined4 **)(param_2 + 4)) {
      lVar4 = 1;
      goto LAB_823fa940;
    }
    fn_823FACD8(apuStack_50);
  }
  puVar1 = apuStack_50[0];
  if (((uint)apuStack_50[0][4] < *(uint *)(param_3 + 0x10)) ||
     (((uint)apuStack_50[0][4] <= *(uint *)(param_3 + 0x10) &&
      ((int)apuStack_50[0][5] < *(int *)(param_3 + 0x14))))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    fn_82359C18(param_3 + 0x30);
    fn_82359C18(param_3 + 0x18);
    fn_8265CA20(param_3);
    *param_1 = puVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_823fa940:
  puVar3 = (undefined4 *)fn_823FAB00(apuStack_50,param_2,lVar4,puVar3,param_3);
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = *puVar3;
  return param_1;
}

