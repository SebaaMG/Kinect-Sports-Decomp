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
extern int fn_82F728D0();
extern int fn_82F72F40();
extern int fn_82F73228();
extern int fn_82F735D8();
extern int fn_82F73680();
extern int fn_82F74AF8();
extern int fn_82F771C8();
extern int fn_82F775F0();
extern unsigned int *lbl_832635C0;


undefined8 * fn_82F77EC0(undefined8 *param_1,int *param_2,int *param_3,char *param_4)

{
  char cVar1;
  undefined8 auStack_30 [6];
  
  cVar1 = *lbl_832635C0;
  if (cVar1 == '\0') {
    fn_82F728D0(auStack_30,1);
    fn_82F73680(auStack_30,param_4);
    if (*param_2 != 0) {
      fn_82F73228(auStack_30,param_2);
    }
    if (*param_3 != 0) {
      if (*param_2 != 0) {
        fn_82F735D8(auStack_30,0x20);
      }
      fn_82F73228(auStack_30,param_3);
    }
    *param_1 = auStack_30[0];
  }
  else if (((cVar1 < '6') || ('9' < cVar1)) && (cVar1 != '_')) {
    fn_82F775F0(auStack_30,param_3,param_4,param_2,0);
    fn_82F74AF8(param_1,auStack_30,*param_4 == '*');
  }
  else {
    fn_82F72F40(auStack_30,param_4);
    if ((*param_2 != 0) && ((*param_3 == 0 || ((param_3[1] & 0x800000U) == 0)))) {
      fn_82F73228(auStack_30,param_2);
    }
    if (*param_3 != 0) {
      fn_82F73228(auStack_30,param_3);
    }
    fn_82F771C8(param_1,auStack_30);
  }
  return param_1;
}

