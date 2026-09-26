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
extern int fn_829DA6D8();
extern unsigned int lbl_821655B8;
extern unsigned int lbl_8326183C;


undefined8 fn_82F4E218(float *param_1,int *param_2)

{
  int iVar1;
  
  if ((param_2 != (int *)0x0) &&
     ((*param_2 != 0 || ((param_1 != (float *)0x0 && (*param_1 <= lbl_821655B8)))))) {
    if (*param_2 == 1) {
      if ((param_2[3] != -2) || (param_2[4] == 0)) {
        RtlEnterCriticalSection(lbl_8326183C + 0x2dec);
        iVar1 = lbl_8326183C;
        if (*(int *)(lbl_8326183C + 0x2de4) != 0) {
          *(int *)(lbl_8326183C + 0x2de4) = *(int *)(lbl_8326183C + 0x2de4) + -1;
        }
        RtlLeaveCriticalSection(iVar1 + 0x2dec);
        return 0;
      }
      iVar1 = fn_829DA6D8(param_2[1],0,1,0xffffffff82f4daa0,0);
      if ((iVar1 != 0) && (iVar1 != -0x7ffffff6)) {
        RtlEnterCriticalSection(lbl_8326183C + 0x2dec);
        iVar1 = lbl_8326183C;
        if (*(int *)(lbl_8326183C + 0x2de4) != 0) {
          *(int *)(lbl_8326183C + 0x2de4) = *(int *)(lbl_8326183C + 0x2de4) + -1;
        }
        RtlLeaveCriticalSection(iVar1 + 0x2dec);
      }
    }
    return 1;
  }
  return 0;
}

