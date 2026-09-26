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
extern unsigned int *auStack_40;
extern int fn_82834EA0();
extern int fn_82835128();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82875368(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 auStack_40 [64];
  
  uVar1 = (int)(param_1[1] - *param_1) / 0xc;
  if ((param_2 & 0xffffffff) < (ulonglong)uVar1) {
    fn_82834EA0(auStack_40,param_1,param_2 * 0xc + (ulonglong)*param_1);
  }
  else if ((ulonglong)uVar1 < (param_2 & 0xffffffff)) {
    fn_82835128(param_1,param_2 - (longlong)(int)uVar1);
    puVar2 = (undefined4 *)param_1[1];
    for (lVar3 = param_2 - (longlong)((int)((int)puVar2 - *param_1) / 0xc); lVar3 != 0;
        lVar3 = lVar3 + -1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      puVar2 = puVar2 + 3;
    }
    param_1[1] = ((int)param_2 - (int)(param_1[1] - *param_1) / 0xc) * 0xc + param_1[1];
  }
  return;
}

