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
extern int fn_82460D38();
extern unsigned int lbl_832765BC;


void fn_8235A508(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = lbl_832765BC;
  uVar1 = *(undefined4 *)(*(int *)(lbl_832765BC + 0x28) + 0x40);
  *param_3 = *(undefined4 *)(*(int *)(lbl_832765BC + 0x28) + 0x3c);
  *param_5 = uVar1;
  fn_82460D38(iVar2,0xffffffff821bbce4,param_1,0x20);
  fn_82460D38(iVar2,0xffffffff821bbcf0,param_2,0x20);
  fn_82460D38(iVar2,0xffffffff821bbcfc,param_4,0x20);
  return;
}

