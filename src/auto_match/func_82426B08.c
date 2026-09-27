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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82508078();
extern float lbl_821954D4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_82426B08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  char *apcStack_18 [6];
  
  iVar1 = *(int *)(param_1 + 4);
  if (((*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8)) / 0x1ac == 1) &&
     (*(int *)(*(int *)(iVar1 + 0x18) * 0x1ac + *(int *)(iVar1 + 8) + 4) != 0)) {
    apcStack_18[0] = "bowlerquickmatchenjoy";
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    apcStack_18[1] = "bowlerquickmatchpractise";
    apcStack_18[2] = "bowlerquickmatchpressure";
    if (*(int *)(param_1 + 4) != *(int *)(*(int *)(param_1 + 8) + 0x2b20)) {
      return;
    }
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + 0xa4);
    uVar3 = ZEXT48(apcStack_18
                   [-(int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                          lbl_821954D4)]);
  }
  else {
    if (iVar1 != *(int *)(*(int *)(param_1 + 8) + 0x2b20)) {
      return;
    }
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + 0xa4);
    uVar3 = 0xffffffff821b8838;
  }
  fn_82508078(uVar2,uVar3,0);
  return;
}

