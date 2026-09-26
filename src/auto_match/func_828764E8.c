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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern int fn_82866018();
extern int fn_82876E38();
extern int fn_82A29D80();


undefined8
fn_828764E8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,char *param_5,
             undefined8 *param_6)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 auStack_140 [4];
  undefined1 auStack_130 [304];
  
  if ((*param_5 == '\0') && (*(char *)(param_1 + 0x420) != '\0')) {
    uVar1 = 1;
    *param_6 = 0;
    *(undefined4 *)(param_6 + 1) = 0;
    *(undefined4 *)(param_6 + 3) = *(undefined4 *)(param_1 + 0x41c);
    *(undefined4 *)(param_6 + 2) = 0;
    *(undefined4 *)((int)param_6 + 0xc) = 0;
  }
  else {
    *param_5 = '\x01';
    iVar2 = fn_82876E38(param_1 + 8,param_2,param_4,auStack_130);
    if (iVar2 == 1) {
      uVar1 = fn_82866018(auStack_130,param_3,0,0,(undefined4 *)((int)param_6 + 0x14));
      if ((int)uVar1 == 1) {
        uVar3 = fn_82A29D80(*(undefined4 *)((int)param_6 + 0x14),auStack_140);
        *(undefined4 *)(param_6 + 1) = 0;
        *param_6 = CONCAT44(auStack_140[0],uVar3);
        uVar3 = *(undefined4 *)(param_1 + 0x41c);
        *(undefined4 *)(param_6 + 2) = 0;
        *(undefined4 *)((int)param_6 + 0xc) = 0;
        *(undefined4 *)(param_6 + 3) = uVar3;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1;
}

