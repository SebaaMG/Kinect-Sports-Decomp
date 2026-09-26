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
extern int fn_82F72808();
extern int fn_82F72F40();
extern int fn_82F73988();
extern int fn_82F739E8();
extern int fn_82F775F0();
extern int fn_82F78540();
extern unsigned int *lbl_832635C0;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


undefined8 fn_82F78748(undefined8 param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined4 uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [16];
  
  fn_82F72808(&uStack_30);
  cVar1 = *lbl_832635C0;
  if (cVar1 == '\0') {
    fn_82F73988(param_1,1,&uStack_30);
  }
  else {
    if (cVar1 == '?') {
      lbl_832635C0 = lbl_832635C0 + 1;
      uStack_24 = uStack_24 & 0xffff;
      uStack_28 = 0;
      puVar2 = (undefined8 *)
               fn_82F775F0(auStack_20,&uStack_30,0xffffffff82196582,&uStack_28,0);
      uStack_30 = *puVar2;
    }
    else if (cVar1 == 'X') {
      lbl_832635C0 = lbl_832635C0 + 1;
      if ((((U64)(uStack_30) >> 0) & 0xFFFFFFFF) == 0) {
        fn_82F72F40(param_1,0xffffffff8202f48c);
        return param_1;
      }
      fn_82F739E8(param_1,0xffffffff82169e5c,&uStack_30);
      return param_1;
    }
    fn_82F78540(param_1,&uStack_30);
  }
  return param_1;
}

