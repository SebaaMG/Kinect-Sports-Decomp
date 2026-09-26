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
extern unsigned int iStack_74;
extern unsigned int iStack_8c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_90;


undefined8 fn_82C490D8(int param_1)

{
  undefined8 uVar1;
  undefined4 uStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  
  if (param_1 == 0) {
    uVar1 = 0xfffffffffffffffd;
  }
  else if ((*(int *)(*(int *)(param_1 + 0x6070) + 0x2c8) == 0) &&
          ((*(uint *)(param_1 + 0x5614) & 1) != 0)) {
    uStack_70 = *(undefined4 *)(param_1 + 0xe84);
    iStack_74 = (int)*(double *)(param_1 + 0x5438);
    uStack_90 = *(undefined4 *)(param_1 + 0x5610);
    uStack_80 = *(undefined4 *)(param_1 + 0xf7c);
    uStack_7c = *(undefined4 *)(param_1 + 0x55ac);
    uStack_78 = *(undefined4 *)(param_1 + 0x5568);
    uStack_88 = *(undefined4 *)(param_1 + 0xb148);
    uStack_84 = 0;
    iStack_8c = param_1;
    uVar1 = (**(code **)(*(int *)(param_1 + 0x6070) + 0xc0))(&uStack_90);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

