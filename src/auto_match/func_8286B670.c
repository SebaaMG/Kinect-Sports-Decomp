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
extern unsigned int *auStack_50;
extern int fn_82230300();
extern int fn_822402F8();
extern int fn_82240378();
extern int fn_8260D428();
extern unsigned int uStack_40;


void fn_8286B670(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  
  puVar4 = param_1;
  if (param_1 != param_2) {
    while (puVar4 = puVar4 + 7, puVar4 != param_2) {
      fn_82240378(auStack_50,puVar4);
      puVar3 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar3 = (undefined4 *)*param_1;
      }
      iVar1 = fn_8260D428(auStack_50,0,uStack_40,puVar3,param_1[4]);
      puVar2 = puVar4;
      puVar3 = puVar4;
      if (iVar1 < 0) {
        while (puVar2 = param_1, param_1 != puVar3) {
          fn_822402F8(puVar3,puVar3 + -7);
          puVar3 = puVar3 + -7;
        }
      }
      else {
        while( true ) {
          puVar5 = puVar2 + -7;
          puVar3 = puVar5;
          if (0xf < (uint)puVar2[-2]) {
            puVar3 = (undefined4 *)*puVar5;
          }
          iVar1 = fn_8260D428(auStack_50,0,uStack_40,puVar3,puVar2[-3]);
          if (-1 < iVar1) break;
          fn_822402F8(puVar2,puVar5);
          puVar2 = puVar5;
        }
      }
      fn_822402F8(puVar2,auStack_50);
      fn_82230300(auStack_50,1,0);
    }
  }
  return;
}

