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
extern int fn_82CEAE80();
extern int fn_82CEAEA8();
extern int fn_82CEAFA8();
extern int fn_82CEB1A8();
extern int fn_82CEB2D8();
extern int fn_82CFB098();
extern int fn_82CFB258();
extern int fn_82CFB360();
extern unsigned int uStack_60;


void fn_82E0EC10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 uStack_60;
  undefined1 auStack_50 [80];
  
  lVar4 = 0;
  uVar1 = fn_82CEB1A8(param_3);
  fn_82CFB258(auStack_50,param_1,uVar1,uStack_60);
  iVar2 = fn_82CEAE80(param_3);
  if (0 < iVar2) {
    do {
      puVar3 = (undefined4 *)fn_82CEAEA8(param_3,lVar4);
      iVar2 = fn_82CEAFA8(param_2,*puVar3);
      if (iVar2 == 0) {
        fn_82CFB098(auStack_50,*(undefined2 *)((int)puVar3 + 0x12),0);
        fn_82CEB2D8(param_3,lVar4,auStack_50);
      }
      lVar4 = lVar4 + 1;
      iVar2 = fn_82CEAE80(param_3);
    } while ((int)lVar4 < iVar2);
  }
  fn_82CFB360(auStack_50);
  return;
}

