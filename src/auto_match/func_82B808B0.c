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
extern unsigned int *auStack_80;
extern int fn_82AA66A8();
extern int fn_82B80788();


undefined8
fn_82B808B0(int param_1,int param_2,uint param_3,char param_4,ulonglong param_5,undefined8 param_6
             )

{
  undefined1 auStack_80 [112];
  
  if ((param_3 == 0) && (*(int *)(param_1 + 0x38) != 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x1c) = 1;
  }
  if ((param_4 != '\0') && ((param_5 & 0xffffffff) != 0)) {
    fn_82B80788(param_1,auStack_80,100,param_5,param_6);
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0xe2c,auStack_80);
  }
  *(uint *)(param_2 + 4) = (param_3 & 3) << 0xe | *(uint *)(param_2 + 4) & 0xffff3fff;
  return 1;
}

