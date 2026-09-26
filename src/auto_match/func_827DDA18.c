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
extern int fn_8256D3A8();
extern int fn_8256D798();
extern int fn_8260D640();
extern int fn_827DA090();
extern int fn_82A2A958();
extern unsigned int uStack_7c;


undefined8 fn_827DDA18(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 **appuStack_90 [5];
  uint uStack_7c;
  undefined1 auStack_50 [56];
  
  uVar1 = *param_2;
  fn_8256D3A8(appuStack_90,*(undefined4 *)(param_1 + 8));
  uVar2 = fn_827DA090(auStack_50,uVar1);
  fn_8260D640(appuStack_90,uVar2,0,0xffffffffffffffff);
  fn_8256D798(auStack_50,1,0);
  if (uStack_7c < 0x10) {
    appuStack_90[0] = appuStack_90;
  }
  iVar3 = fn_82A2A958(appuStack_90[0]);
  if (iVar3 == 0) {
    uVar2 = thunk_FUN_82a2b798();
  }
  else {
    uVar2 = 0;
  }
  fn_8256D798(appuStack_90,1,0);
  return uVar2;
}

