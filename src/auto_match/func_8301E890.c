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
extern int fn_82F68CC0();
extern int fn_82FA5060();
extern int fn_8300E490();
extern unsigned int lbl_831BC768;


undefined8 fn_8301E890(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(param_2 + 4);
  iVar3 = iVar1 * 4;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar4 = fn_82FA5060(lbl_831BC768,iVar3);
    *(int *)(param_1 + 0x10) = (int)uVar4;
    if ((uVar4 & 0xffffffff) == 0) {
      return 0x34;
    }
    fn_82F68CC0(uVar4,param_2 + 8,iVar3);
  }
  puVar2 = (undefined4 *)(param_2 + 8 + iVar3);
  uVar5 = fn_8300E490(param_1 + 0x14,iVar1,(int)puVar2 + 6,*puVar2,*(undefined1 *)(puVar2 + 1)
                            ,*(undefined1 *)((int)puVar2 + 5));
  return uVar5;
}

