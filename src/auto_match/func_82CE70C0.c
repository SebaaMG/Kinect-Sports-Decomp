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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CE7240();
extern int fn_82CE75A8();
extern int fn_82CEDB38();
extern unsigned int iStack_40;
extern unsigned int iStack_4c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


void fn_82CE70C0(int param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 uStack_50;
  int iStack_4c;
  uint uStack_48;
  uint uStack_44;
  int iStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  fn_82CEDB38(param_2,0xffffffff82132928);
  fn_82CEDB38(param_2,0xffffffff821328fc);
  uStack_50 = 0;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0x80000000;
  iStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0x80000000;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_30 = (**(code **)(*(int *)(param_1 + 0x1c) + 0x50))(param_1 + 0x1c);
  uStack_50 = *(undefined4 *)(param_1 + 0x974);
  puVar3 = (undefined4 *)(param_1 + 0xc08);
  lVar2 = 0x20;
  do {
    if (*(char *)(puVar3 + -2) != '\0') {
      iVar1 = fn_82CE5410();
      if (uStack_48 == (uStack_44 & 0x3fffffff)) {
        fn_82CE63B0(*(undefined4 *)(iVar1 + 0x14),&iStack_4c,4);
      }
      *(undefined4 **)(uStack_48 * 4 + iStack_4c) = puVar3 + -0x4b;
      uStack_48 = uStack_48 + 1;
      iVar1 = fn_82CE5410();
      if (uStack_3c == (uStack_38 & 0x3fffffff)) {
        fn_82CE63B0(*(undefined4 *)(iVar1 + 0x14),&iStack_40,4);
      }
      *(undefined4 *)(uStack_3c * 4 + iStack_40) = *puVar3;
      uStack_3c = uStack_3c + 1;
    }
    lVar2 = lVar2 + -1;
    puVar3 = puVar3 + 0x4c;
  } while (lVar2 != 0);
  fn_82CE75A8(param_1,param_2,&uStack_50);
  fn_82CE7240(&uStack_50);
  return;
}

