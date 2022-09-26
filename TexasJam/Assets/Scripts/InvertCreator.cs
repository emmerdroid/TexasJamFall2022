using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InvertCreator : MonoBehaviour
{

    public float maxTimer;
    public float maxSize;
    public float currentSize;
    public int startTime;

    public RectTransform rT;
    bool delayEnd;
    float timer;
    // Start is called before the first frame update
    void Start()
    {
        rT = GetComponent<RectTransform>();
        StartCoroutine(startCount());
        delayEnd = false;
        timer = 0;
        currentSize = 1;
    }

    // Update is called once per frame
    void Update()
    {
        if(delayEnd)
        {
            if (timer > maxTimer && rT.localScale.x <= maxSize)
            {
                timer = 0;
                currentSize += 1.5f;
                rT.localScale = new Vector3 (currentSize, currentSize, currentSize);
            }

            else
            {
                timer += Time.deltaTime;
            }
        }

        if(rT.localScale.x == maxSize)
        {
            timer = 0;
            currentSize = 1.5f;
            rT.localScale = new Vector3(currentSize, currentSize, currentSize);
        }
    }

    IEnumerator startCount()
    {
        yield return new WaitForSeconds(startTime);
        delayEnd = true;

    }
}
