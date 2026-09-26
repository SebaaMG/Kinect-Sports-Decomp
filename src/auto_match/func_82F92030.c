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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_20;
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_8265D5A8();
extern int fn_82F91650();
extern int fn_82F92208();
extern int fn_82F92258();
extern int fn_82F92810();
extern int fn_82F94750();
extern int fn_82F953B8();
extern int fn_82F95C50();
extern unsigned int iStack00000014;
extern unsigned int uStack_14;
extern unsigned int uStack_18;


void fn_82F92030(int param_1)

{
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar1;
  int iStack00000014;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iStack00000014 = param_1;
  puVar2 = (undefined4 *)fn_82F94750(auStack_30,param_1);
  uStack_18 = *puVar2;
  uStack_14 = puVar2[1];
  puVar3 = (undefined8 *)fn_82F91650(auStack_28,iStack00000014);
  fn_82F92258(auStack_20,iStack00000014,*puVar3,CONCAT44(uStack_18,uStack_14));
  uVar1 = fn_8265D5A8(*(undefined4 *)(iStack00000014 + 4));
  fn_82F95C50(iStack00000014 + 2,uVar1);
  uVar1 = fn_82F92208(*(undefined4 *)(iStack00000014 + 4));
  fn_82F95C50(iStack00000014 + 2,uVar1);
  uVar1 = fn_82F953B8(*(undefined4 *)(iStack00000014 + 4));
  fn_82F95C50(iStack00000014 + 2,uVar1);
  fn_82F92810(iStack00000014 + 1,*(undefined4 *)(iStack00000014 + 4),1);
  *(undefined4 *)(iStack00000014 + 4) = 0;
  *(undefined4 *)(iStack00000014 + 8) = 0;
  return;
}

