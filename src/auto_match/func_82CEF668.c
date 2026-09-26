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
extern unsigned int *auStack_30;
extern int fn_82CE3E28();
extern int fn_82D000A0();
extern int fn_82D00388();
extern int fn_82D003F0();
extern int fn_82D00450();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82CEF668(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_30 [24];
  
  fn_82D00388(auStack_30,0);
  for (; param_2 != (undefined4 *)0x0; param_2 = (undefined4 *)param_2[2]) {
    fn_82D000A0(auStack_30,*param_2,param_2);
  }
  for (; param_1 != (undefined4 *)0x0; param_1 = (undefined4 *)param_1[2]) {
    iVar1 = fn_82D00450(auStack_30,*param_1,0);
    if (iVar1 != 0) {
      *(undefined4 *)param_1[3] = **(undefined4 **)(iVar1 + 0xc);
      if (*(int *)param_1[3] != 0) {
        fn_82CE3E28(*(int *)param_1[3]);
      }
    }
  }
  fn_82D003F0(auStack_30);
  return;
}

