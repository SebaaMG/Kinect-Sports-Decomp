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
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_82F8EE48();
extern int fn_82F8F2E0();
extern int fn_82F8F328();
extern int fn_82F8F368();
extern int fn_82F8F580();
extern unsigned int iStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack_20;


void fn_82F8EEE0(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iStack00000014;
  undefined4 uStack0000001c;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  uVar1 = fn_82F8EE48(param_1);
  uVar2 = fn_82F8F2E0(iStack00000014);
  if (uVar1 < uVar2) {
    uVar3 = fn_82F8F580(iStack00000014,*(undefined4 *)(iStack00000014 + 8),1,uStack0000001c);
    *(undefined4 *)(iStack00000014 + 8) = uVar3;
  }
  else {
    uStack_20 = uStack0000001c;
    puVar4 = (undefined8 *)fn_82F8F328(auStack_30,iStack00000014);
    fn_82F8F368(auStack_28,iStack00000014,*puVar4,uStack_20);
  }
  return;
}

