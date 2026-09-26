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
extern unsigned int *auStack_140;
extern int fn_82830D10();
extern int fn_8283F7C0();
extern int fn_82F68CC0();
extern unsigned int iStack0000001c;
extern unsigned int iStack_18;
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int iStack_38;
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int uStack00000014;
extern unsigned int uStack00000024;
extern unsigned int uStack_28;


void fn_82849BD0(undefined4 param_1,int param_2,uint param_3,int *param_4)

{
  undefined4 uStack00000014;
  int iStack0000001c;
  uint uStack00000024;
  int *piStack0000002c;
  undefined1 auStack_140 [256];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined1 *puStack_30;
  char *pcStack_2c;
  undefined4 uStack_28;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  piStack0000002c = param_4;
  for (iStack_40 = 0; iStack_40 < *(int *)(*piStack0000002c + 8); iStack_40 = iStack_40 + 1) {
    iStack_20 = piStack0000002c[2] + iStack_40 * 0xf0;
    iStack_3c = *(int *)(*piStack0000002c + 0xc) + iStack_40 * 100;
    fn_82830D10(auStack_140,0xffffffff8201f4e0,*(undefined4 *)(iStack_3c + 4));
    puStack_30 = auStack_140;
    pcStack_2c = "R1::texanim2TextureParameters";
    uStack_28 = 0x14;
    iStack_38 = fn_8283F7C0(iStack0000001c,&puStack_30);
    if (iStack_38 != 0) {
      if (uStack00000024 == 0) {
        iStack_18 = iStack_20 + 0xd4;
        fn_82F68CC0(iStack_18,
                     (ulonglong)*(uint *)(iStack0000001c + 0x28) +
                     (ulonglong)*(uint *)(iStack_38 + 0xc),0x14);
      }
      else {
        iStack_1c = iStack_20 + 0xd4;
        fn_82F68CC0(iStack_1c,(ulonglong)uStack00000024 + (ulonglong)*(uint *)(iStack_38 + 0xc),
                     0x14);
      }
    }
  }
  return;
}

