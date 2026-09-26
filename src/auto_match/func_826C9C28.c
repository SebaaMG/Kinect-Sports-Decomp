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
extern int fn_826C98F8();
extern unsigned int uStack_13;
extern unsigned int uStack_14;
extern unsigned int uStack_15;
extern unsigned int uStack_16;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


undefined8 fn_826C9C28(int *param_1)

{
  uint uVar1;
  char cVar3;
  int iVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  
  cVar3 = fn_826C98F8();
  if (cVar3 != '\0') {
    iVar2 = (**(code **)(*param_1 + 0x40))(param_1);
    if ((*(ushort *)(iVar2 + 0xb00) & 1) != 0) {
      iVar2 = (**(code **)(*param_1 + 0x40))(param_1);
      uVar1 = *(uint *)(iVar2 + 0xb00) >> 0x1c & 3;
      if ((uVar1 == 3) || (uVar1 != 1)) {
        uStack_1c = 0;
        uStack_18 = 0;
        uStack_16 = 0;
        uStack_14 = 0;
        uStack_13 = 0;
        uStack_20 = 0x4000;
        uStack_15 = 0xff;
        (**(code **)(*param_1 + 0xe8))(param_1,&uStack_20);
      }
    }
  }
  return 1;
}

