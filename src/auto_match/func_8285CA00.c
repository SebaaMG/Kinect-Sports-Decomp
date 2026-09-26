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
extern int fn_8285C730();
extern int fn_82862150();
extern int fn_82862338();
extern unsigned int lbl_8321157C;
extern unsigned int lbl_8321158C;


undefined8 fn_8285CA00(int param_1,int param_2,longlong param_3)

{
  undefined8 uVar1;
  float *pfVar2;
  int iVar3;
  ulonglong uVar4;
  
  if ((param_2 != 0) && (uVar4 = 0, *(int *)(param_2 + 0x44) != 0)) {
    do {
      uVar1 = fn_82862338(param_2,lbl_8321157C,uVar4);
      pfVar2 = (float *)fn_82862150(uVar1,lbl_8321157C);
      if ((*(float *)(param_2 + 0x4c) < *pfVar2) &&
         (iVar3 = fn_8285C730(pfVar2[1],*(ushort *)(pfVar2 + 2) & 0xff,lbl_8321158C,
                                *(undefined2 *)(param_1 + 0x18),uVar4 + param_3), iVar3 == 2)) {
        return 1;
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(param_2 + 0x44));
  }
  return 0;
}

