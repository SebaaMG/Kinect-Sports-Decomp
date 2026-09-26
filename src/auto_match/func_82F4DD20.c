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
extern int fn_82F5CB50();
extern unsigned int lbl_8326183C;


void fn_82F4DD20(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  uVar2 = 0;
  piVar3 = (int *)(lbl_8326183C + 0x2d9c);
  do {
    if (*piVar3 == param_1) {
      iVar1 = *(int *)(lbl_8326183C + 0x2d8c);
      if (iVar1 == 0) {
        return;
      }
      if (((int)uVar2 < 0) || (1 < uVar2)) {
        puVar5 = (undefined4 *)(iVar1 + -4);
        lVar4 = 2;
        do {
          fn_82F5CB50(puVar5[1]);
          puVar5 = puVar5 + 2;
          fn_82F5CB50(*puVar5);
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      else {
        fn_82F5CB50(*(undefined4 *)(uVar2 * 8 + iVar1));
        fn_82F5CB50(*(undefined4 *)(uVar2 * 8 + iVar1 + 4));
      }
      return;
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 4;
  } while ((int)uVar2 < 2);
  return;
}

