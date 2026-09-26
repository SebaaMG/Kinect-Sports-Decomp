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
extern int fn_829BDF70();


void fn_829BE258(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x40);
  *(undefined4 **)(param_1 + 0x1c0) = puVar1;
  iVar3 = 0;
  *puVar1 = fn_829BDF70;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  iVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x24) << 8);
  *(int *)(param_1 + 0xa4) = iVar2;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      puVar1 = (undefined4 *)(iVar2 + -4);
      lVar4 = 0x40;
      do {
        puVar1 = puVar1 + 1;
        *puVar1 = 0xffffffff;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x100;
    } while (iVar3 < *(int *)(param_1 + 0x24));
  }
  return;
}

