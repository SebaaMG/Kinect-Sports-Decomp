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
extern unsigned int *auStack_20;
extern int fn_8232ACF8();
extern int fn_825354B8();
extern int fn_82536008();
extern int fn_82536288();


void fn_8232B310(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  bool bVar4;
  uint auStack_20 [2];
  
  if ((param_1[0x44] != 0) && (param_1[0x46] != 0)) {
    fn_8232ACF8(param_1[0x44],*param_1);
    fn_8232ACF8(param_1[0x46],*param_1);
  }
  if ((param_2 < *param_1) && (param_1[0x50] != 0)) {
    puVar3 = param_1 + 0x48;
    if (param_1[0x48] != 0) {
      fn_82536008();
      fn_82536288(puVar3);
      *puVar3 = 0;
    }
    puVar2 = param_1 + *param_1 * 6;
    if (puVar2 == (uint *)0x0) {
      bVar4 = false;
    }
    else {
      bVar4 = *puVar2 != 0;
    }
    if (bVar4) {
      auStack_20[0] = *puVar2;
      uVar1 = fn_825354B8(auStack_20,param_1 + 0x4c,0,*(undefined4 *)(param_1[0x50] + 0x84c),
                                0xffffffff83296bc0,0xffffffff83296bd0);
      *puVar3 = uVar1;
    }
  }
  return;
}

