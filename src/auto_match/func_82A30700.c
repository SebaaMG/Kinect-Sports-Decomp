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
extern unsigned int *auStack_34;
extern int fn_82A2CB08();
extern int fn_82A2CBB0();
extern int fn_82A30690();
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


longlong fn_82A30700(undefined8 param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 auStack_34 [13];
  
  lVar1 = fn_82A30690(param_1,(ulonglong)*(ushort *)(param_2 + 0x36) << 6,&uStack_40,auStack_34,
                        &uStack_38,&uStack_3c);
  if (-1 < lVar1) {
    fn_82A2CBB0(param_2,param_3,uStack_40);
    *(byte *)(param_2 + 0x35) = *(byte *)(param_2 + 0x35) & 0xcf | 0x20;
    fn_82A2CB08(param_1,auStack_34[0],uStack_38,uStack_3c);
  }
  return lVar1;
}

