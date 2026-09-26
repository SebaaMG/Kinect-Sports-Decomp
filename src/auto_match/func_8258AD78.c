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
extern unsigned int *auStack_30;
extern int fn_825200F0();
extern int fn_8256BF18();
extern int fn_8256BF70();
extern int fn_8256DE08();
extern unsigned int lbl_83265A24;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


undefined4 * fn_8258AD78(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_30 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  fn_825200F0(auStack_30);
  uStack_40 = 0;
  uStack_3c = 0;
  fn_8256DE08(&uStack_40,0);
  uVar1 = lbl_83265A24;
  uVar2 = fn_8256BF18();
  fn_8256BF70(uVar2,auStack_30,uVar1,0,0,param_1,&uStack_40,1);
  return param_1;
}

