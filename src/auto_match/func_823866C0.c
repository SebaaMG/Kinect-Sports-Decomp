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
extern int fn_82386910();
extern unsigned int lbl_83276564;


longlong fn_823866C0(uint *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 *apuStack_30 [12];
  
  iVar3 = lbl_83276564;
  puVar5 = *(undefined4 **)(lbl_83276564 + 4);
  puVar4 = puVar5;
  if (*(char *)((int)puVar5[1] + 0x15) == '\0') {
    puVar2 = (undefined4 *)puVar5[1];
    do {
      if ((uint)puVar2[3] < *param_1) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        if ((*(char *)((int)puVar4 + 0x15) != '\0') && (*param_1 < (uint)puVar2[3])) {
          puVar4 = puVar2;
        }
        puVar1 = (undefined4 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar1;
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  if (*(char *)((int)puVar4 + 0x15) == '\0') {
    puVar2 = (undefined4 *)*puVar4;
  }
  else {
    puVar2 = *(undefined4 **)(*(int *)(lbl_83276564 + 4) + 4);
  }
  if (*(char *)((int)puVar2 + 0x15) == '\0') {
    do {
      if (*param_1 < (uint)puVar2[3]) {
        puVar1 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      else {
        puVar1 = (undefined4 *)puVar2[2];
      }
      puVar2 = puVar1;
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  lVar6 = 0;
  apuStack_30[0] = puVar5;
  while (apuStack_30[0] != puVar4) {
    lVar6 = lVar6 + 1;
    fn_82381BC0(apuStack_30);
  }
  fn_82386910(apuStack_30,iVar3,puVar5,puVar4);
  return lVar6;
}

