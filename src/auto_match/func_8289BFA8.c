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
extern unsigned int *auStack_18;
extern unsigned int *auStack_20;
extern int fn_82898540();
extern int fn_828999E8();
extern int fn_8289BBE8();


longlong fn_8289BFA8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar4;
  undefined4 *puVar3;
  ulonglong uVar5;
  undefined1 auStack_20 [4];
  undefined4 *puStack_1c;
  undefined4 auStack_18 [2];
  
  if (((*(int **)(param_1 + 0x20) != (int *)0x0) &&
      (iVar2 = (**(code **)(**(int **)(param_1 + 0x20) + 0xc))(), iVar2 != 0)) &&
     (cVar4 = fn_82898540(param_1), cVar4 != '\0')) {
    puStack_1c = *(undefined4 **)(param_1 + 0x48);
    auStack_18[0] = *puStack_1c;
    auStack_20[0] = 0;
    fn_8289BBE8(param_1 + 0x44,auStack_18,&puStack_1c,auStack_20);
    puVar1 = *(undefined4 **)(param_1 + 0x48);
    puStack_1c = puVar1;
    puVar3 = (undefined4 *)fn_828999E8(auStack_18,*puVar1,puVar1,param_1);
    if (((undefined4 *)*puVar3 != puVar1) &&
       (uVar5 = (ulonglong)(uint)((undefined4 *)*puVar3)[6], uVar5 != 0)) {
      return uVar5 - 0x50;
    }
  }
  return 0;
}

