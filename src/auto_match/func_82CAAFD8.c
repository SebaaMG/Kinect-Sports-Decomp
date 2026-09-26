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
extern int fn_82C53960();
extern int fn_82C53970();


undefined8 fn_82CAAFD8(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  
  puVar2 = (undefined4 *)0x0;
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0xfffffffffffffffd;
  }
  else {
    puVar4 = param_1 + -1;
    lVar6 = 6;
    do {
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    puVar3 = param_1 + 2;
    param_1[5] = param_2;
    param_1[4] = 0;
    iVar5 = 0;
    puVar4 = puVar3;
    if (0 < param_2) {
      do {
        puVar2 = (undefined4 *)fn_82C53960(8,0);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)*puVar3;
          while (puVar2 != (undefined4 *)0x0) {
            puVar2 = (undefined4 *)*puVar2;
            fn_82C53970();
          }
          puVar2 = (undefined4 *)*param_1;
          *puVar3 = 0;
          while (puVar2 != (undefined4 *)0x0) {
            puVar2 = (undefined4 *)*puVar2;
            fn_82C53970();
          }
          *param_1 = 0;
          return 0xfffffffffffffff7;
        }
        *puVar2 = 0;
        iVar5 = iVar5 + 1;
        puVar2[1] = 0;
        puVar2[1] = 0;
        *puVar4 = puVar2;
        puVar4 = puVar2;
      } while (iVar5 < param_2);
    }
    param_1[3] = puVar2;
    *puVar2 = 0;
    uVar1 = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return uVar1;
}

