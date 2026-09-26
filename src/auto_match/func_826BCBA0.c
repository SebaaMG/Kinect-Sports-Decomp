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
extern unsigned int INFINITY;
extern int fn_826BC900();
extern int fn_826BCA20();
extern int fn_826BCA90();
extern int fn_82F664B0();
extern unsigned int lbl_8200831C;


char * fn_826BCBA0(double param_1,undefined8 param_2,char *param_3,undefined8 param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  char *pcVar6;
  
  uVar3 = 0xffffffff82008358;
  if (param_5 < 1) {
    iVar5 = -param_5;
    if (param_5 < -0xe) {
      iVar5 = 0xe;
    }
    param_5 = 10;
    uVar3 = (ulonglong)*(uint *)(&lbl_8200831C + iVar5 * 4);
  }
  if (((ulonglong)param_1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if ((((ulonglong)param_1 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
       (bVar2 = true, ((ulonglong)param_1 & 0xfffffffffffff) == 0)) {
      bVar2 = false;
    }
    if (bVar2) {
      uVar4 = 0xffffffff8200831c;
    }
    else if (param_1 == INFINITY) {
      uVar4 = 0xffffffff82008310;
    }
    else {
      if (param_1 != -INFINITY) {
        return param_3;
      }
      uVar4 = 0xffffffff82008304;
    }
    fn_82F664B0(param_3,param_4,uVar4);
  }
  else {
    iVar5 = (int)param_1;
    if (param_5 == 10) {
      if ((double)(longlong)iVar5 == param_1) {
        param_3 = (char *)fn_826BCA20(iVar5,param_3,param_4);
      }
      else {
        fn_826BC900(param_3,param_4,uVar3,param_1);
        cVar1 = *param_3;
        pcVar6 = param_3;
        while (cVar1 != '\0') {
          if ((*pcVar6 == ',') || (*pcVar6 == '.')) {
            *pcVar6 = '.';
            return param_3;
          }
          pcVar6 = pcVar6 + 1;
          cVar1 = *pcVar6;
        }
      }
    }
    else {
      param_3 = (char *)fn_826BCA90(iVar5,param_3,param_4);
    }
  }
  return param_3;
}

