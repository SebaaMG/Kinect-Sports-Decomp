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
extern int fn_82CEAF18();
extern int fn_82CEAF20();
extern int fn_82CFBBF0();
extern int fn_82CFFC68();
extern int fn_82CFFD88();
extern int fn_82CFFD98();


ulonglong fn_82CEEB70(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  undefined1 auStack_40 [64];
  
  iVar1 = fn_82CEAF18(param_2);
  lVar5 = 0;
  if (0 < iVar1) {
    do {
      puVar2 = (undefined4 *)fn_82CEAF20(param_2,lVar5);
      iVar3 = fn_82CFBBF0(*puVar2,0xffffffff820d2ac0);
      if (iVar3 == 0) {
        fn_82CFFC68(auStack_40,param_1,puVar2);
        if (*(char *)(puVar2 + 3) == '\x1d') {
          puVar4 = (uint *)fn_82CFFD88(auStack_40,0);
          if ((ulonglong)*puVar4 != 0) {
            return (ulonglong)*puVar4;
          }
          return 0xffffffff82132fbc;
        }
        if (*(char *)(puVar2 + 3) == '!') {
          puVar4 = (uint *)fn_82CFFD98(auStack_40,0);
          if ((*puVar4 & 0xfffffffe) != 0) {
            return (ulonglong)*puVar4 & 0xfffffffe;
          }
          return 0xffffffff82132fbc;
        }
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < iVar1);
  }
  return 0;
}

