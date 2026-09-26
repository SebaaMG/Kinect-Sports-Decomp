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
extern int fn_82381BC0();
extern int fn_8288B760();


longlong fn_822489C8(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar5;
  int iVar4;
  longlong lVar6;
  undefined4 *apuStack_30 [12];
  
  if ((*(int *)(param_1 + 0x38) == 0) || (cVar5 = fn_8288B760(), cVar5 == '\0')) {
    lVar6 = 0;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x38);
    lVar6 = 1;
    puVar2 = *(undefined4 **)(piVar1[4] + 0x220);
    apuStack_30[0] = (undefined4 *)*puVar2;
    while (puVar3 = apuStack_30[0], apuStack_30[0] != puVar2) {
      if (lVar6 == 0) {
LAB_82248a48:
        lVar6 = 0;
      }
      else {
        iVar4 = (**(code **)(*piVar1 + 8))();
        cVar5 = (**(code **)(*(int *)(iVar4 + 0x1ec) + 0x38))((int *)(iVar4 + 0x1ec),puVar3[4]);
        lVar6 = 1;
        if (cVar5 == '\0') goto LAB_82248a48;
      }
      fn_82381BC0(apuStack_30);
      piVar1 = *(int **)(param_1 + 0x38);
      puVar2 = *(undefined4 **)(piVar1[4] + 0x220);
    }
  }
  return lVar6;
}

