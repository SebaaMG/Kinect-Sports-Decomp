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
extern int fn_82ABDBE8();


void fn_82AD1328(undefined8 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  char cVar4;
  
  uVar1 = *param_2;
  if ((*(uint *)(uVar1 + 8) & 0x3f80) == 0x3700) {
    puVar3 = *(uint **)(((*param_3 & 3) + 0xb) * 4 + uVar1);
    uVar1 = puVar3[3];
    *param_2 = uVar1;
    *param_3 = *puVar3 >> 5 & 0xff;
  }
  if ((*(uint *)(uVar1 + 8) & 0x3f80) == 0x180) {
    puVar3 = *(uint **)(uVar1 + 0x2c);
    if ((*puVar3 & 0x1e) == 0) {
      cVar4 = fn_82ABDBE8(puVar3,*(undefined4 *)(uVar1 + 0x30));
      if (cVar4 != '\0') {
        uVar2 = puVar3[3];
        if (((*(uint *)(uVar2 + 8) >> 0x17 & 1) != 0) &&
           (*(short *)(uVar2 + 0x12) == *(short *)(uVar1 + 0x12))) {
          *param_2 = uVar2;
          *param_3 = (*puVar3 >> 5 & 0xff) >> ((*param_3 & 3) << 1) & 3 | 0xe4;
        }
      }
    }
  }
  return;
}

